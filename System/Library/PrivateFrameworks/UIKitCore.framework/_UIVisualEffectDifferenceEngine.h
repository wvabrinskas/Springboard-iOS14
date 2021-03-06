/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _UIVisualEffectDifferenceEngine : NSObject {

	long long _sourceCount;
	long long _destinationCount;
	long long _prefixCount;
	long long _suffixCount;
	long long _innerSourceCount;
	long long _innerDestinationCount;
	long long* _mergeTable;
	NSArray* _merged;
	NSArray* _source;
	NSArray* _destination;

}

@property (nonatomic,copy) NSArray * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSArray * destination;                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy,readonly) NSArray * merged; 
-(NSArray *)merged;
-(void)_calculateLCSSTable;
-(id)describeMergeTable;
-(void)_reset;
-(void)_calculate;
-(void)setSource:(NSArray *)arg1 ;
-(NSArray *)destination;
-(id)description;
-(NSArray *)source;
-(void)_calculateMerge;
-(id)mergeSource:(id)arg1 andDestination:(id)arg2 ;
-(void)setDestination:(NSArray *)arg1 ;
-(void)_calculatePrefixAndSuffix;
-(void)dealloc;
@end

