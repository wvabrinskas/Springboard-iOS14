/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying> {

	sqlite3_snapshot* _s;
	int _externalReferences;
	int _flags;

}

@property (nonatomic,readonly) const void* bytes; 
-(unsigned long long)hash;
-(id)mutableCopy;
-(const void*)bytes;
-(long long)compare:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

