/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol _WKFocusedElementInfo <NSObject>
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * value; 
@property (nonatomic,copy,readonly) NSString * placeholder; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (getter=isUserInitiated,nonatomic,readonly) BOOL userInitiated; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@required
-(NSString *)label;
-(BOOL)isUserInitiated;
-(NSObject*<NSSecureCoding>)userObject;
-(long long)type;
-(NSString *)value;
-(NSString *)placeholder;

@end
