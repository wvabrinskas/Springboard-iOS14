/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NotesShared/NotesShared-Structs.h>
@class ICDrawingCommandData;

@interface ICDrawingCommand : NSObject {

	BOOL _hidden;
	ICDrawingCommandData* _data;
	TopoID _timestamp;

}

@property (nonatomic,readonly) ICDrawingCommandData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) TopoID timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
-(unsigned long long)hash;
-(BOOL)isEqualDrawingCommand:(id)arg1 ;
-(id)initWithCommand:(id)arg1 hidden:(BOOL)arg2 timestamp:(TopoID)arg3 ;
-(BOOL)hidden;
-(id)description;
-(id)initWithArchive:(const Command*)arg1 version:(unsigned)arg2 sortedUUIDs:(id)arg3 ;
-(unsigned)saveToArchive:(Command*)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(ICDrawingCommandData *)data;
-(TopoID)timestamp;
@end
