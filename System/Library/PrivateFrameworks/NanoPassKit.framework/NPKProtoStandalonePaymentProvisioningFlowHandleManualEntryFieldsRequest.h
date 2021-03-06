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

@class NSMutableArray, NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleManualEntryFieldsRequest : PBRequest <NSCopying> {

	NSMutableArray* _manualEntryFields;
	NPKProtoStandaloneRequestHeader* _requestHeader;

}

@property (nonatomic,retain) NPKProtoStandaloneRequestHeader * requestHeader;              //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * manualEntryFields;                           //@synthesize manualEntryFields=_manualEntryFields - In the implementation block
+(Class)manualEntryFieldsType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)addManualEntryFields:(id)arg1 ;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
-(unsigned long long)manualEntryFieldsCount;
-(void)clearManualEntryFields;
-(id)manualEntryFieldsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)manualEntryFields;
-(void)setManualEntryFields:(NSMutableArray *)arg1 ;
@end

