/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIView, UIViewController;

@interface _UIDebuggingOverlayDetail : NSObject {

	NSString* _title;
	NSString* _detail;
	long long _accessoryType;

}

@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * detail;                                //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) long long accessoryType;                          //@synthesize accessoryType=_accessoryType - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIViewController * viewController; 
+(id)detailWithTitle:(id)arg1 detail:(id)arg2 ;
-(UIView *)view;
-(UIViewController *)viewController;
-(long long)accessoryType;
-(void)_updateForInspectedView:(id)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)detail;
-(void)setDetail:(NSString *)arg1 ;
@end
