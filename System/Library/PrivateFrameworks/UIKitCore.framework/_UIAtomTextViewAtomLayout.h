/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIAtomTextViewAtomLayout <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@optional
-(long long)baseWritingDirection;

@required
-(long long)selectionStyle;
-(void)setEnabled:(BOOL)arg1;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
-(CGRect)selectionBounds;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;
-(void)setSelectionStyle:(long long)arg1;
-(BOOL)isEnabled;

@end

