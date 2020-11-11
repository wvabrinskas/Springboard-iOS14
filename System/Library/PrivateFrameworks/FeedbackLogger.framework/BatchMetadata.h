/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FeedbackLogger.framework/FeedbackLogger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BatchMetadata : NSObject {

	int _batchStatus;
	NSString* _batchIdentifier;
	NSString* _timestampReferenceIdentifier;
	unsigned long long _batchSize;
	unsigned long long _processedAttempts;
	NSString* _dateCreated;
	NSString* _dateLastProcessed;
	NSString* _dateUploaded;

}

@property (nonatomic,copy) NSString * batchIdentifier;                           //@synthesize batchIdentifier=_batchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * timestampReferenceIdentifier;              //@synthesize timestampReferenceIdentifier=_timestampReferenceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                       //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) int batchStatus;                                    //@synthesize batchStatus=_batchStatus - In the implementation block
@property (assign,nonatomic) unsigned long long processedAttempts;               //@synthesize processedAttempts=_processedAttempts - In the implementation block
@property (nonatomic,copy) NSString * dateCreated;                               //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,copy) NSString * dateLastProcessed;                         //@synthesize dateLastProcessed=_dateLastProcessed - In the implementation block
@property (nonatomic,copy) NSString * dateUploaded;                              //@synthesize dateUploaded=_dateUploaded - In the implementation block
-(unsigned long long)batchSize;
-(NSString *)dateCreated;
-(NSString *)batchIdentifier;
-(void)setBatchIdentifier:(NSString *)arg1 ;
-(void)setDateCreated:(NSString *)arg1 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(NSString *)timestampReferenceIdentifier;
-(void)setTimestampReferenceIdentifier:(NSString *)arg1 ;
-(int)batchStatus;
-(void)setBatchStatus:(int)arg1 ;
-(unsigned long long)processedAttempts;
-(void)setProcessedAttempts:(unsigned long long)arg1 ;
-(NSString *)dateLastProcessed;
-(void)setDateLastProcessed:(NSString *)arg1 ;
-(NSString *)dateUploaded;
-(void)setDateUploaded:(NSString *)arg1 ;
@end
