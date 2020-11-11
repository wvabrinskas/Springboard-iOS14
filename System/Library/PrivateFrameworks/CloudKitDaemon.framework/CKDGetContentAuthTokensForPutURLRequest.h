/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDAssetTokenRequest, NSMapTable, NSDictionary;

@interface CKDGetContentAuthTokensForPutURLRequest : CKDURLRequest {

	BOOL _useEncryption;
	CKDAssetTokenRequest* _assetTokenRequest;
	NSMapTable* _transactionStateByRequestIDs;
	NSDictionary* _headers;

}

@property (nonatomic,retain) CKDAssetTokenRequest * assetTokenRequest;               //@synthesize assetTokenRequest=_assetTokenRequest - In the implementation block
@property (nonatomic,retain) NSMapTable * transactionStateByRequestIDs;              //@synthesize transactionStateByRequestIDs=_transactionStateByRequestIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                                 //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) BOOL useEncryption;                                     //@synthesize useEncryption=_useEncryption - In the implementation block
-(NSDictionary *)headers;
-(void)setUseEncryption:(BOOL)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)useEncryption;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
-(void)setTransactionStateByRequestIDs:(NSMapTable *)arg1 ;
-(NSMapTable *)transactionStateByRequestIDs;
-(id)initWithOperation:(id)arg1 assetTokenRequest:(id)arg2 headers:(id)arg3 ;
@end
