/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class CKRecord;

@interface HMBCloudZoneConflict : HMFObject {

	CKRecord* _client;
	CKRecord* _server;
	CKRecord* _ancestor;

}

@property (nonatomic,readonly) CKRecord * client;                //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) CKRecord * server;                //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) CKRecord * ancestor;              //@synthesize ancestor=_ancestor - In the implementation block
-(id)initWithError:(id)arg1 ;
-(CKRecord *)server;
-(CKRecord *)client;
-(id)initWithClientRecord:(id)arg1 serverRecord:(id)arg2 ancestorRecord:(id)arg3 ;
-(CKRecord *)ancestor;
@end

