/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoPeerPaymentWebServiceContextDidChangeRequest : PBRequest <NSCopying> {

	NSData* _peerPaymentAccountData;
	NSData* _peerPaymentWebServiceContextData;

}

@property (nonatomic,readonly) BOOL hasPeerPaymentWebServiceContextData; 
@property (nonatomic,retain) NSData * peerPaymentWebServiceContextData;               //@synthesize peerPaymentWebServiceContextData=_peerPaymentWebServiceContextData - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerPaymentAccountData; 
@property (nonatomic,retain) NSData * peerPaymentAccountData;                         //@synthesize peerPaymentAccountData=_peerPaymentAccountData - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPeerPaymentWebServiceContextData:(NSData *)arg1 ;
-(void)setPeerPaymentAccountData:(NSData *)arg1 ;
-(BOOL)hasPeerPaymentWebServiceContextData;
-(BOOL)hasPeerPaymentAccountData;
-(NSData *)peerPaymentWebServiceContextData;
-(NSData *)peerPaymentAccountData;
@end

