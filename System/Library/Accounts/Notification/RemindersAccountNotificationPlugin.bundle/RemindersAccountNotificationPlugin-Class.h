/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Accounts/Notification/RemindersAccountNotificationPlugin.bundle/RemindersAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface RemindersAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relevantAccountTypeIdentifiers;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(BOOL)shouldProcessChangeType:(int)arg1 forACAccount:(id)arg2 ;
-(void)deleteAccountForACAccount:(id)arg1 ;
-(BOOL)isCloudKitRemindersACAccount:(id)arg1 ;
-(void)updateAccountForACAccount:(id)arg1 ;
@end
