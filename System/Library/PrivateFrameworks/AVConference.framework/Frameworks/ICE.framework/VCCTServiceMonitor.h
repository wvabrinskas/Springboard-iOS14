/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ICE.framework/ICE
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@class CoreTelephonyClient, CTDataStatus, CTDataConnectionStatus, CTSignalStrengthInfo, CTXPCServiceSubscriptionContext, NSNumber, NSString;

@interface VCCTServiceMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {

	CoreTelephonyClient* _ctClient;
	CTDataStatus* _dataStatus;
	CTDataConnectionStatus* _connectionStatus;
	CTSignalStrengthInfo* _signalStrength;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	BOOL _supportsCellular;
	NSNumber* _inHomeCountry;

}

@property (nonatomic,readonly) NSNumber * inHomeCountry;                               //@synthesize inHomeCountry=_inHomeCountry - In the implementation block
@property (nonatomic,readonly) CTDataStatus * dataStatus;                              //@synthesize dataStatus=_dataStatus - In the implementation block
@property (nonatomic,readonly) CTDataConnectionStatus * connectionStatus;              //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (nonatomic,readonly) CTSignalStrengthInfo * signalStrength;                  //@synthesize signalStrength=_signalStrength - In the implementation block
@property (nonatomic,readonly) BOOL supportsCellular;                                  //@synthesize supportsCellular=_supportsCellular - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(NSNumber *)inHomeCountry;
-(id)init;
-(BOOL)supportsCellular;
-(CTSignalStrengthInfo *)signalStrength;
-(void)internetConnectionStateChanged:(id)arg1 ;
-(id)getCurrentDataSubscriptionContext;
-(CTDataConnectionStatus *)connectionStatus;
-(CTDataStatus *)dataStatus;
-(void)dealloc;
@end

