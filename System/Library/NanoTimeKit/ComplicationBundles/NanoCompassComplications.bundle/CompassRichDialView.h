/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoCompassComplications/NanoCompassBaseRichView.h>

@class UIView;

@interface CompassRichDialView : NanoCompassBaseRichView {

	UIView* _ticksView;
	UIView* _needleView;

}

@property (nonatomic,readonly) UIView * ticksView; 
@property (nonatomic,readonly) UIView * needleView; 
-(void)layoutSubviews;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(id)_newTicksView;
-(id)_newNeedleView;
-(UIView *)ticksView;
-(UIView *)needleView;
@end

