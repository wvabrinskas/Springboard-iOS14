/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlayServices/CarPlayServices-Structs.h>
#import <libobjc.A.dylib/CRSInCallServerToClientInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, BSServiceConnection;

@interface CRSInCallAssertion : NSObject <CRSInCallServerToClientInterface, BSInvalidatable> {

	os_unfair_lock_s _lock;
	BOOL _lock_pendingPresent;
	BOOL _lock_presented;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	BOOL _lock_allowsBanners;
	NSString* _reason;
	BSServiceConnection* _connection;

}

@property (nonatomic,copy) NSString * reason;                               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) BSServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL allowsBanners; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)reason;
-(void)activate;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(void)setAllowsBanners:(BOOL)arg1 ;
-(BSServiceConnection *)connection;
-(void)invalidate;
-(void)_handleConnectionInterrupted;
-(void)_handleConnectionActivated;
-(BOOL)allowsBanners;
@end

