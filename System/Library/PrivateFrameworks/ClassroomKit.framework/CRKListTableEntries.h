/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKTableEntries.h>

@class NSArray, NSString;

@interface CRKListTableEntries : NSObject <CRKTableEntries> {

	NSArray* mArray;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)rowCount;
-(unsigned long long)columnCount;
-(id)initWithArray:(id)arg1 ;
-(id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
@end

