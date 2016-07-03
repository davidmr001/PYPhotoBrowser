//  代码地址: https://github.com/iphone5solo/PYPhotosView
//  代码地址: http://code4app.com/thread-8612-1-1.html
//  Created by CoderKo1o.
//  Copyright © 2016年 iphone5solo. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "UIView+PYExtension.h"
#import "MBProgressHUD+PY.h"

/** --------------可修改(在PYConst.m修改)------------- */
#define PYPlaceholderImage [UIImage imageNamed:@"PYPhotosView.bundle/placeholderimage"] // 占位图
#define PYLoadFailureImage [UIImage imageNamed:@"PYPhotosView.bundle/imageerror"] // 加载失败图(添加在占位图上大小默认为100 * 100)
#define PYAddImage [UIImage imageNamed:@"PYPhotosView.bundle/addimage"] // 添加图片图
#define PYDeleteImage [UIImage imageNamed:@"PYPhotosView.bundle/deleteimage"] // 删除图片图

UIKIT_EXTERN const CGFloat PYPhotoMargin;   // 图片之间的默认间距(默认为5)
UIKIT_EXTERN const CGFloat PYPhotoWidth;    // 图片的默认宽度（默认为70）
UIKIT_EXTERN const CGFloat PYPhotoHeight;   // 图片的默认高度（默认为70）
UIKIT_EXTERN const CGFloat PYPhotosMaxCol;  // 图片每行默认最多个数（默认为3）
UIKIT_EXTERN const CGFloat PYPreviewPhotoSpacing;   // 预览图片时，图片的间距（默认为30）
UIKIT_EXTERN const CGFloat PYPreviewPhotoMaxScale;  // 预览图片时，图片最大放大倍数（默认为2）
UIKIT_EXTERN const CGFloat PYImagesMaxCountWhenWillCompose; // 在发布状态时，最多可以上传的图片张数（默认为9）



/** ---------------建议不修改的宏定义------------- */
// 边距
#define PYMargin 10

// (预览时)状态栏颜色
#define PYBarTintColor PYColor(15, 16, 19)

// 颜色
#define PYColor(r,g,b) [UIColor colorWithRed:(r/255.0) green:(g/255.0) blue:(b/255.0) alpha:1.0]
#define PYRandomColor  PYColor(arc4random_uniform(256),arc4random_uniform(256),arc4random_uniform(256))

// 屏幕宽高
#define PYScreenW [UIScreen mainScreen].bounds.size.width
#define PYScreenH [UIScreen mainScreen].bounds.size.height
#define PYScreenSize [UIScreen mainScreen].bounds.size

// 判断当前系统版本
#define PYIOS8 [[UIDevice currentDevice].systemVersion floatValue] >= 8.0 && [[UIDevice currentDevice].systemVersion floatValue] < 9.0
#define PYIOS9 [[UIDevice currentDevice].systemVersion floatValue] >= 9.0 && [[UIDevice currentDevice].systemVersion floatValue] < 10.0


/** ---------------自定义通知------------- */
UIKIT_EXTERN NSString *const PYBigImageDidClikedNotification;       // 大图被点击（缩小）
UIKIT_EXTERN NSString *const PYSmallgImageDidClikedNotification;    // 小图被点击（放大）
UIKIT_EXTERN NSString *const PYImagePageDidChangedNotification;     // 浏览过程中的图片被点击（放回原位）
UIKIT_EXTERN NSString *const PYPreviewImagesDidChangedNotification; // 预览图片被点击
UIKIT_EXTERN NSString *const PYChangeNavgationBarStateNotification; // 改变状态栏
UIKIT_EXTERN NSString *const PYAddImageDidClickedNotification;      // 添加图片被点击
UIKIT_EXTERN NSString *const PYCollectionViewDidScrollNotification; // 滚动通知


