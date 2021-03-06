/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPStreamingAssetIdentifier : PBCodable <NSCopying> {

	NSData* _fileSignature;
	NSString* _owner;
	NSData* _referenceSignature;

}

@property (nonatomic,readonly) BOOL hasOwner; 
@property (nonatomic,retain) NSString * owner;                          //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) BOOL hasFileSignature; 
@property (nonatomic,retain) NSData * fileSignature;                    //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceSignature; 
@property (nonatomic,retain) NSData * referenceSignature;               //@synthesize referenceSignature=_referenceSignature - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setOwner:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)owner;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasOwner;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasFileSignature;
-(BOOL)hasReferenceSignature;
@end

