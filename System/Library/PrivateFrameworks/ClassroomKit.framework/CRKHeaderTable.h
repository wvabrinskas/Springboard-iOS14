/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKTablePrinting.h>

@class CRKTable, NSArray;

@interface CRKHeaderTable : NSObject <CRKTablePrinting> {

	CRKTable* _table;
	NSArray* _headers;
	NSArray* _keyPaths;
	NSArray* _objects;

}

@property (nonatomic,copy,readonly) NSArray * headers;               //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * keyPaths;              //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy,readonly) NSArray * objects;               //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) CRKTable * table;                     //@synthesize table=_table - In the implementation block
-(CRKTable *)table;
-(NSArray *)objects;
-(NSArray *)headers;
-(NSArray *)keyPaths;
-(id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2 ;
-(id)tableString;
-(id)initWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3 ;
@end

