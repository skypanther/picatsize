function __processArg(obj, key) {
    var arg = null;
    if (obj) {
        arg = obj[key] || null;
        delete obj[key];
    }
    return arg;
}

function Controller() {
    function doClick() {
        var pascam = require("com.skypanther.picatsize");
        pascam.showCamera({
            showControls: true,
            autohide: true,
            success: function(e) {
                Ti.API.info("Our type was: " + e.mediaType);
                Ti.API.info("bytes: " + e.media.length);
                Ti.API.info("height: " + e.media.height);
                Ti.API.info("width: " + e.media.width);
                Ti.API.info("apiName: " + e.media.apiName);
                console.log(e);
            },
            error: function(e) {
                Ti.API.info(JSON.stringify(e));
            },
            saveToPhotoGallery: false,
            mediaTypes: [ pascam.MEDIA_TYPE_PHOTO ],
            targetWidth: 1024,
            targetHeight: 800
        });
    }
    require("alloy/controllers/BaseController").apply(this, Array.prototype.slice.call(arguments));
    this.__controllerPath = "index";
    this.args = arguments[0] || {};
    if (arguments[0]) {
        {
            __processArg(arguments[0], "__parentSymbol");
        }
        {
            __processArg(arguments[0], "$model");
        }
        {
            __processArg(arguments[0], "__itemTemplate");
        }
    }
    var $ = this;
    var exports = {};
    var __defers = {};
    $.__views.index = Ti.UI.createWindow({
        backgroundColor: "white",
        id: "index"
    });
    $.__views.index && $.addTopLevelView($.__views.index);
    $.__views.label = Ti.UI.createLabel({
        width: Ti.UI.SIZE,
        height: Ti.UI.SIZE,
        color: "#000",
        font: {
            fontSize: 12
        },
        text: "Click me",
        id: "label"
    });
    $.__views.index.add($.__views.label);
    doClick ? $.__views.label.addEventListener("click", doClick) : __defers["$.__views.label!click!doClick"] = true;
    exports.destroy = function() {};
    _.extend($, $.__views);
    $.index.open();
    __defers["$.__views.label!click!doClick"] && $.__views.label.addEventListener("click", doClick);
    _.extend($, exports);
}

var Alloy = require("alloy"), Backbone = Alloy.Backbone, _ = Alloy._;

module.exports = Controller;