/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class NSUUID, _HMContext, NSString, HMFMessageDestination, NSDictionary, NSMutableArray;

@interface HMCameraObjectFetchClient : HMFObject <HMFLogging, HMFMessageReceiver> {

	NSUUID* _UUID;
	_HMContext* _context;
	NSString* _messageName;
	HMFMessageDestination* _destination;
	NSDictionary* _payload;
	Class _classForUnarchiving;
	NSMutableArray* _fetchedObjects;

}

@property (readonly) NSMutableArray * fetchedObjects;                                         //@synthesize fetchedObjects=_fetchedObjects - In the implementation block
@property (copy,readonly) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (readonly) _HMContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (copy,readonly) NSString * messageName;                                             //@synthesize messageName=_messageName - In the implementation block
@property (copy,readonly) HMFMessageDestination * destination;                                //@synthesize destination=_destination - In the implementation block
@property (copy) NSDictionary * payload;                                                      //@synthesize payload=_payload - In the implementation block
@property (retain) Class classForUnarchiving;                                                 //@synthesize classForUnarchiving=_classForUnarchiving - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSDictionary *)payload;
-(void)setPayload:(NSDictionary *)arg1 ;
-(HMFMessageDestination *)destination;
-(id)initWithUUID:(id)arg1 context:(id)arg2 messageName:(id)arg3 destination:(id)arg4 ;
-(void)setClassForUnarchiving:(Class)arg1 ;
-(void)fetchWithCompletion:(/*^block*/id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(_HMContext *)context;
-(Class)classForUnarchiving;
-(void)handleDidFetchObjectsMessage:(id)arg1 ;
-(NSMutableArray *)fetchedObjects;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)UUID;
-(NSString *)messageName;
-(id)logIdentifier;
-(void)dealloc;
@end

