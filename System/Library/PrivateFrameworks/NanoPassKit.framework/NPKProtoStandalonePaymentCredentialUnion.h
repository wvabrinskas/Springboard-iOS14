/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandaloneCreditAccountCredential, NSString, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable <NSCopying> {

	NPKProtoStandaloneCreditAccountCredential* _creditAccountCredential;
	NSString* _flowIdentifier;
	NPKProtoStandalonePaymentRemoteCredential* _remoteCredential;

}

@property (nonatomic,readonly) BOOL hasFlowIdentifier; 
@property (nonatomic,retain) NSString * flowIdentifier;                                                        //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteCredential; 
@property (nonatomic,retain) NPKProtoStandalonePaymentRemoteCredential * remoteCredential;                     //@synthesize remoteCredential=_remoteCredential - In the implementation block
@property (nonatomic,readonly) BOOL hasCreditAccountCredential; 
@property (nonatomic,retain) NPKProtoStandaloneCreditAccountCredential * creditAccountCredential;              //@synthesize creditAccountCredential=_creditAccountCredential - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRemoteCredential:(NPKProtoStandalonePaymentRemoteCredential *)arg1 ;
-(NSString *)flowIdentifier;
-(void)writeTo:(id)arg1 ;
-(void)setFlowIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NPKProtoStandalonePaymentRemoteCredential *)remoteCredential;
-(BOOL)hasRemoteCredential;
-(void)setCreditAccountCredential:(NPKProtoStandaloneCreditAccountCredential *)arg1 ;
-(BOOL)hasFlowIdentifier;
-(BOOL)hasCreditAccountCredential;
-(NPKProtoStandaloneCreditAccountCredential *)creditAccountCredential;
@end

