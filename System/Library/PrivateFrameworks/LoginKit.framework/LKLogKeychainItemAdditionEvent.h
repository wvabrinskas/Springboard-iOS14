/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LoginKit/LKLogEvent.h>

@class NSString;

@interface LKLogKeychainItemAdditionEvent : LKLogEvent {

	NSString* _keychainItemAdded;

}

@property (nonatomic,readonly) NSString * keychainItemAdded;              //@synthesize keychainItemAdded=_keychainItemAdded - In the implementation block
+(id)eventFromLKLogEvent:(id)arg1 ;
-(id)dictionary;
-(void)setKeychainItemAdded:(NSString *)arg1 ;
-(NSString *)keychainItemAdded;
@end
