/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NotesShared/NotesShared-Structs.h>
@class NSString;

@interface ICArchiveReader : NSObject {

	archiveRef _archive;
	NSString* _sourcePath;
	NSString* _destinationPath;

}

@property (nonatomic,retain) NSString * sourcePath;                   //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;              //@synthesize destinationPath=_destinationPath - In the implementation block
-(NSString *)sourcePath;
-(NSString *)destinationPath;
-(BOOL)unarchiveResultURLs:(id*)arg1 error:(id*)arg2 ;
-(BOOL)unarchiveSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveContentsOfDirectory:(id)arg1 toDirectory:(id)arg2 resultURLs:(id*)arg3 error:(id*)arg4 ;
-(id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
-(void)setSourcePath:(NSString *)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
@end

