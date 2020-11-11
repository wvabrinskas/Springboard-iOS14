/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@protocol CRKIPAddressProviding, OS_dispatch_queue;
@class NSObject, NSString;

@interface CRKNotifyWhenNetworkChangesIPAddressProvider : NSObject <CRKIPAddressProviding> {

	id<CRKIPAddressProviding> mBaseProvider;
	NSObject*<OS_dispatch_queue> mQueue;
	int mNetworkChangeNotificationToken;
	NSString* _IPAddress;

}

@property (nonatomic,copy) NSString * IPAddress;                    //@synthesize IPAddress=_IPAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)subscribeToNetworkChangeNotifications;
-(void)dealloc;
-(NSString *)IPAddress;
-(id)initWithIPAddressProvider:(id)arg1 ;
-(void)unsubscribeFromNetworkChangeNotifications;
-(void)networkDidChange;
-(void)networkDidChangeDebounced;
-(void)setIPAddress:(NSString *)arg1 ;
@end
