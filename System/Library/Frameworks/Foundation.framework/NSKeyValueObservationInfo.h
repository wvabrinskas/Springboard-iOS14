/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface NSKeyValueObservationInfo : NSObject {

	NSArray* _observances;
	unsigned long long _cachedHash;
	BOOL _cachedIsShareable;

}

@property (nonatomic,readonly) BOOL containsOnlyInternalObservationHelpers; 
-(unsigned long long)hash;
-(id)_copyByAddingObservance:(id)arg1 ;
-(BOOL)containsOnlyInternalObservationHelpers;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithObservances:(id*)arg1 count:(unsigned long long)arg2 hashValue:(unsigned long long)arg3 ;
-(void)dealloc;
@end

