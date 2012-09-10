DDPopoverBackgroundView
==============


Purpose
--------------

`DDPopoverBackgroundView` is a single-file iOS 5.0+ non-ARC class to help customizing `UIPopoverController` popovers.

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

 - `+ (void)setShadowEnabled:(BOOL)shadowEnabled;`  
	enable/disable shadow under popover

 - `+ (void)setArrowBase:(CGFloat)arrowBase;`  
   `+ (void)setArrowHeight:(CGFloat)arrowHeight;`  
	set arrow width (base) / height

 - `+ (void)setImages:(UIImage *)background top:(UIImage *)top right:(UIImage *)right bottom:(UIImage *)bottom left:(UIImage *)left;`  
	set custom images for background and top/right/bottom/left arrows

 - `+ (void)rebuildArrowImages;`  
	rebuild pre-rendered arrow/background images using `tintColor` and `arrowBase` / `arrowHeight`


License
---------------

This program is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License along with this program.  If not, see <[http://www.gnu.org/licenses/](http://www.gnu.org/licenses/)>.