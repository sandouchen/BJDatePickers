//
//  BJCityPickerView.h
//  BJCityPicker
//
//  Created by zbj-mac on 16/4/8.
//  Copyright © 2016年 zbj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BJCityPicker.h"
//有遮盖，添加在window
@interface BJCityPickerView : UIView

/**
 *  单例创建
 */
+(BJCityPickerView*)shareCityPickerView;
/**
 *  实例创建
 */
+(instancetype)cityPickerView;
/**
 *  城市选中后回调
 *
 *  @param citySelected 城市选中回调
 */
-(void)cityPicekrViewDidSelected:(citySelected)citySelected;
/**
 *  展示
 */
-(void)show;
/**
 *  移除
 */
-(void)hidden;
@end
