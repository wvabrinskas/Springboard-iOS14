/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFHistoryAnalyzerOptions : NSObject <NSCopying> {

	BOOL _automaticallyPruneTransientRecords;
	unsigned long long _transactionLimit;

}

@property (assign,nonatomic) BOOL automaticallyPruneTransientRecords;              //@synthesize automaticallyPruneTransientRecords=_automaticallyPruneTransientRecords - In the implementation block
@property (assign,nonatomic) unsigned long long transactionLimit;                  //@synthesize transactionLimit=_transactionLimit - In the implementation block
-(BOOL)automaticallyPruneTransientRecords;
-(void)setAutomaticallyPruneTransientRecords:(BOOL)arg1 ;
-(unsigned long long)transactionLimit;
-(void)setTransactionLimit:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

