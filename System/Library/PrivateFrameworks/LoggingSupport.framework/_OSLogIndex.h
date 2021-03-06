/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSMutableArray, _OSLogCollectionReference, NSString, _OSLogEventStoreMetadata;

@interface _OSLogIndex : NSObject {

	NSMutableArray* _fileq;
	_OSLogCollectionReference* _lcr;
	NSString* _file;
	SCD_Struct_OS26* _metadata;
	BOOL _metadataValid;
	_OSLogEventStoreMetadata* _metadata2;
	os_timesync_db_sRef _tsdb;

}

@property (nonatomic,readonly) os_timesync_db_sRef timesync;                         //@synthesize tsdb=_tsdb - In the implementation block
@property (nonatomic,readonly) unsigned long long persistStartWalltime; 
@property (nonatomic,readonly) unsigned long long specialStartWalltime; 
@property (nonatomic,readonly) unsigned long long endWalltime; 
-(os_timesync_db_sRef)timesync;
-(id)init;
-(unsigned long long)persistStartWalltime;
-(BOOL)_buildFileIndex;
-(void)insertChunkStore:(id)arg1 ;
-(id)initWithCollection:(id)arg1 buildLocalIndex:(BOOL)arg2 ;
-(id)initWithCollection:(id)arg1 timesync:(os_timesync_db_sRef)arg2 metadata:(id)arg3 ;
-(void)_enumerateEntriesInRange:(os_timesync_range_s*)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_foreachIndexFile:(/*^block*/id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)specialStartWalltime;
-(BOOL)_openTimesyncDatabase;
-(void)enumerateEntriesInRange:(os_timesync_range_s*)arg1 options:(unsigned)arg2 usingCatalogFilter:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)addReferenceToIndex:(id)arg1 error:(id*)arg2 ;
-(void)enumerateEntriesFromLastBootWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_addFileToIndex:(const char*)arg1 error:(id*)arg2 ;
-(void)insertIndexFile:(id)arg1 ;
-(void)enumerateEntriesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateFilesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)endWalltime;
-(BOOL)_buildSingleFileIndex:(id*)arg1 ;
-(void)dealloc;
-(BOOL)_readArchiveMetadata:(id*)arg1 ;
@end

