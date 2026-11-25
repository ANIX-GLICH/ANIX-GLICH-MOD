#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MODPlayLayer, PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
        if (!PlayLayer::init(level, useReplay, dontCreateObjects)) {
            return false;
        }

        auto menu = CCMenu::create();
        if (!menu) {
            return true;
        }

        menu->setID("mod-floating-menu");
        menu->setPosition({0.f, 0.f});

        auto label = CCLabelBMFont::create("MOD", "bigFont.fnt");
        if (!label) {
            return true;
        }
        label->setScale(0.45f);

        auto button = CCMenuItemSpriteExtra::create(
            label,
            this,
            menu_selector(MODPlayLayer::onMODButton)
        );
        if (!button) {
            return true;
        }

        auto winSize = CCDirector::sharedDirector()->getWinSize();
        button->setPosition({36.f, winSize.height - 36.f});
        menu->addChild(button);
        this->addChild(menu, 1000);
        return true;
    }

    void onMODButton(CCObject*) {
        FLAlertLayer::create(
            "MOD",
            "Floating menu is ready. This starter keeps gameplay unchanged; "
            "speed hacks, noclip, and other gameplay cheats are not included.",
            "Close"
        )->show();
    }
};
