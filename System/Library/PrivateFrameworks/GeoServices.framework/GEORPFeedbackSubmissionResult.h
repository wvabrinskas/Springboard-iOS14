/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEORPFeedbackSubmissionResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _feedbackId;
	NSMutableArray* _imageIdMapEntrys;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_feedbackId : 1;
		unsigned read_imageIdMapEntrys : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasFeedbackId; 
@property (nonatomic,retain) NSString * feedbackId; 
@property (nonatomic,retain) NSMutableArray * imageIdMapEntrys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)imageIdMapEntryType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addImageIdMapEntry:(id)arg1 ;
-(NSMutableArray *)imageIdMapEntrys;
-(unsigned long long)imageIdMapEntrysCount;
-(void)clearImageIdMapEntrys;
-(id)imageIdMapEntryAtIndex:(unsigned long long)arg1 ;
-(void)setImageIdMapEntrys:(NSMutableArray *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)feedbackId;
-(void)readAll:(BOOL)arg1 ;
-(void)setFeedbackId:(NSString *)arg1 ;
-(BOOL)hasFeedbackId;
@end

