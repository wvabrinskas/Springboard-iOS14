/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSData, NSString;

@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest {

	/*^block*/id _vettingInitiationRequestCompletionBlock;
	CKRecordID* _shareRecordID;
	NSData* _encryptedKey;
	NSString* _participantID;
	NSString* _baseToken;

}

@property (nonatomic,copy) CKRecordID * shareRecordID;                              //@synthesize shareRecordID=_shareRecordID - In the implementation block
@property (nonatomic,copy) NSData * encryptedKey;                                   //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,copy) NSString * participantID;                                //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,copy) NSString * baseToken;                                    //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,copy) id vettingInitiationRequestCompletionBlock;              //@synthesize vettingInitiationRequestCompletionBlock=_vettingInitiationRequestCompletionBlock - In the implementation block
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(void)setBaseToken:(NSString *)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(CKRecordID *)shareRecordID;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(NSString *)baseToken;
-(id)generateRequestOperations;
-(NSString *)participantID;
-(id)requestOperationClasses;
-(void)setParticipantID:(NSString *)arg1 ;
-(id)vettingInitiationRequestCompletionBlock;
-(id)initWithOperation:(id)arg1 shareRecordID:(id)arg2 encryptedKey:(id)arg3 participantID:(id)arg4 baseToken:(id)arg5 ;
-(void)setVettingInitiationRequestCompletionBlock:(id)arg1 ;
@end
