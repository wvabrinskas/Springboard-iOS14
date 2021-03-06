/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DifferentialPrivacy/_DPCMSRecord.h>

@class NSData, NSString;

@interface _DPCMSSequenceRecord : _DPCMSRecord {

	short _sequenceHashIndex;
	NSData* _sequence;
	NSString* _plainSequence;

}

@property (nonatomic,retain) NSData * sequence;                    //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) short sequenceHashIndex;              //@synthesize sequenceHashIndex=_sequenceHashIndex - In the implementation block
@property (nonatomic,copy) NSString * plainSequence;               //@synthesize plainSequence=_plainSequence - In the implementation block
+(id)entityName;
-(id)description;
-(NSData *)sequence;
-(id)jsonString;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(void)setSequence:(NSData *)arg1 ;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(NSString *)plainSequence;
-(void)setPlainSequence:(NSString *)arg1 ;
-(id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7 ;
-(short)sequenceHashIndex;
-(void)setSequenceHashIndex:(short)arg1 ;
@end

