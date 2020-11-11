/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/PETEventProperty.h>

@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty {

	NSSet* _possibleValues;
	BOOL _autoSanitizeValues;

}
-(id)longestValueString;
-(id)possibleValues;
-(BOOL)isValidValue:(id)arg1 ;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(id)initWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(BOOL)arg3 ;
-(id)description;
-(unsigned long long)cardinality;
@end
