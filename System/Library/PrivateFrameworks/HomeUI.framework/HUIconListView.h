/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray;

@interface HUIconListView : UIView {

	NSArray* _iconDescriptors;
	NSMutableArray* _iconViews;

}

@property (nonatomic,retain) NSMutableArray * iconViews;              //@synthesize iconViews=_iconViews - In the implementation block
@property (nonatomic,retain) NSArray * iconDescriptors;               //@synthesize iconDescriptors=_iconDescriptors - In the implementation block
-(id)init;
-(void)setIconViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)iconViews;
-(NSArray *)iconDescriptors;
-(void)setIconDescriptors:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)_setUpIcons;
-(void)_prepareIconArray;
-(void)_addIconWithDescriptor:(id)arg1 ;
-(void)_layoutRightToLeft;
-(void)_layoutLeftToRight;
-(void)_addIconNamed:(id)arg1 ;
@end
