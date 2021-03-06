/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NCNotificationSource.h>

@class NCNotificationDispatcher, NSString;

@interface SBWalletNotificationSource : NSObject <NCNotificationSource> {

	NCNotificationDispatcher* _dispatcher;

}

@property (nonatomic,retain) NCNotificationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDispatcher:(NCNotificationDispatcher *)arg1 ;
-(NCNotificationDispatcher *)dispatcher;
-(id)initWithDispatcher:(id)arg1 ;
-(void)postNotificationRequestForCardItem:(id)arg1 ;
-(void)modifyNotificationRequestForCardItem:(id)arg1 ;
-(void)withdrawNotificationRequestForCardItem:(id)arg1 ;
@end

