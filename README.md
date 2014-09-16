DDPopoverBackgroundView
==============


Purpose
--------------

`DDPopoverBackgroundView` is a single-file iOS 5.0+ ARC class (non-ARC compatible) to help customizing `UIPopoverController` popovers.

*Originally inspired by [KSCustomUIPopover](https://github.com/Scianski/KSCustomUIPopover) and [PCPopoverController](https://github.com/pcperini/PCPopoverController).*


Usage
--------------

Usage is simple, all you have to do is include `DDPopoverBackgroundView` and call `setPopoverBackgroundViewClass:`.

	UIPopoverController *popOver = [[UIPopoverController alloc] initWithContentViewController:content];
	[popOver setPopoverBackgroundViewClass:[DDPopoverBackgroundView class]];


Properties / Methods
--------------

 - `+ (void)setContentInset:(CGFloat)contentInset;`
	adjust content inset (~ border width)

 - `+ (void)setTintColor:(UIColor *)tintColor;`
	set tint color used for arrow and popover background

 - `+ (void)setBackgroundImageCornerRadius:(CGFloat)cornerRadius;`
	set background image corner radius

 - `+ (void)setShadowEnabled:(BOOL)shadowEnabled;`
	enable/disable shadow under popover

 - `+ (void)setArrowBase:(CGFloat)arrowBase;`
   `+ (void)setArrowHeight:(CGFloat)arrowHeight;`
	set arrow width (base) / height

 - `+ (void)setBackgroundImage: top: right: bottom: left:`
	set custom images for background and top/right/bottom/left arrows

 - `+ (void)rebuildArrowImages;`
	rebuild pre-rendered arrow/background images using `tintColor` and `arrowBase` / `arrowHeight`


License
---------------

DDPopoverBackgroundView is available under the MIT license. See the LICENSE file for more info.
