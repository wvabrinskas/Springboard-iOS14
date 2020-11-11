/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetsToDownload, NSString, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	NSString* _minimumVersionEtag;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPRequestedFields* _requestedFields;

}

@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasMinimumVersionEtag; 
@property (nonatomic,retain) NSString * minimumVersionEtag;                        //@synthesize minimumVersionEtag=_minimumVersionEtag - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;              //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(void)mergeFrom:(id)arg1 ;
-(CKDPRequestedFields *)requestedFields;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(BOOL)hasRequestedFields;
-(unsigned)requestTypeCode;
-(unsigned long long)hash;
-(Class)responseClass;
-(id)dictionaryRepresentation;
-(BOOL)hasRecordIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPRecordIdentifier *)recordIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(BOOL)hasAssetsToDownload;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)setMinimumVersionEtag:(NSString *)arg1 ;
-(BOOL)hasMinimumVersionEtag;
-(NSString *)minimumVersionEtag;
@end
