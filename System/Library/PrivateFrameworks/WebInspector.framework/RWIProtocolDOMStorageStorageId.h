/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * securityOrigin; 
@property (assign,nonatomic) BOOL isLocalStorage; 
+(id)safe_initWithSecurityOrigin:(id)arg1 isLocalStorage:(BOOL)arg2 ;
-(NSString *)securityOrigin;
-(BOOL)isLocalStorage;
-(void)setSecurityOrigin:(NSString *)arg1 ;
-(void)setIsLocalStorage:(BOOL)arg1 ;
-(id)initWithSecurityOrigin:(id)arg1 isLocalStorage:(BOOL)arg2 ;
@end

