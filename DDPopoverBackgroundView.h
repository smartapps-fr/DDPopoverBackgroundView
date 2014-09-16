//
// DDPopoverBackgroundView.h
// https://github.com/ddebin/DDPopoverBackgroundView
//

#ifndef __IPHONE_5_0
	#warning "This project uses features only available in iOS SDK 5.0 and later."
#endif

#import <UIKit/UIKit.h>
#import <UIKit/UIPopoverBackgroundView.h>

/**
 `DDPopoverBackgroundView` is a class to help customizing `UIPopoverController` popovers.
 */
@interface DDPopoverBackgroundView : UIPopoverBackgroundView
{
	CGFloat						arrowOffset;
	UIPopoverArrowDirection		arrowDirection;
	UIImageView					*arrowImageView;
	UIImageView					*popoverBackgroundImageView;
}

@property (nonatomic, readwrite) CGFloat arrowOffset;
@property (nonatomic, readwrite) UIPopoverArrowDirection arrowDirection;

/**
 Adjust content inset (~ border width)

 @param contentInset The content inset
 */
+ (void)setContentInset:(CGFloat)contentInset;

/**
 Set tint color used for arrow and popover background

 @param tintColor A `UIColor` for tint
 */
+ (void)setTintColor:(UIColor *)tintColor;

/**
 Enable/disable shadow under popover

 @param shadowEnabled Whether or not to enable shadow
 */
+ (void)setShadowEnabled:(BOOL)shadowEnabled;

/**
 Set arrow width (base)

 @param arrowBase Arrow width
 */
+ (void)setArrowBase:(CGFloat)arrowBase;

/**
 Set arrow height

 @param arrowHeight Arrow height
 */
+ (void)setArrowHeight:(CGFloat)arrowHeight;

/**
 Set the background image corners radius

 @param cornerRadius Border corner radius
 */
+ (void)setBackgroundImageCornerRadius:(CGFloat)cornerRadius;

/**
 Set custom images for background and top/right/bottom/left arrows

 @param background Image for background
 @param top Image for top
 @param right Image for right
 @param bottom Image for bottom
 @param left Image for left
 */
+ (void)setBackgroundImage:(UIImage *)background top:(UIImage *)top right:(UIImage *)right bottom:(UIImage *)bottom left:(UIImage *)left;

/**
 Rebuild pre-rendered arrow/background images
 */
+ (void)rebuildArrowImages;

@end
