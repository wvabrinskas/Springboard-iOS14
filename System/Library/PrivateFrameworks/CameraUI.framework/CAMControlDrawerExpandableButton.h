/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CAMControlDrawerExpandableButton
@property (assign,nonatomic) UIEdgeInsets expansionInsets; 
@property (assign,nonatomic,__weak) id<CAMControlDrawerExpandableButtonDelegate> delegate; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded; 
@required
-(void)setExpanded:(BOOL)arg1;
-(BOOL)isExpanded;
-(id<CAMControlDrawerExpandableButtonDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setExpansionInsets:(UIEdgeInsets)arg1;
-(UIEdgeInsets)expansionInsets;

@end
