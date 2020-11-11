/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TSPersistence/TSPersistence-Structs.h>
@class TSPDistributableArchiveOutputStream, TSPDatabase, TSPDistributableFileManager;

@interface TSPDistributableWriter : NSObject {

	TSPDistributableArchiveOutputStream* _outputStream;
	set<long long, std::__1::less<long long>, std::__1::allocator<long long> >* _encodedIds;
	set<int, std::__1::less<int>, std::__1::allocator<int> >* _typesSeen;
	AB _isCancelled;
	TSPDatabase* _database;
	TSPDistributableFileManager* _fileManager;
	unsigned long long _processedEntriesCount;

}
-(void)cancel;
-(void)dealloc;
-(id)_initWithDatabase:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned)arg4 includeToc:(BOOL)arg5 ;
-(BOOL)_processEntry:(id)arg1 tocEntries:(id)arg2 progressContext:(id)arg3 error:(id*)arg4 ;
-(id)initWithTangierPath:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned)arg4 ;
-(BOOL)goAndReportProgress:(BOOL)arg1 error:(id*)arg2 context:(id)arg3 ;
@end
