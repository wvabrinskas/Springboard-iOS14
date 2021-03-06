/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionPredictionHeuristicsInternal/ATXInformationHeuristicRefreshTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSSecureCoding;
@class _CDContextualKeyPath, NSObject, _CDContextualChangeRegistration;

@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {

	_CDContextualKeyPath* _contextKeyPath;
	NSObject*<NSCopying>*<NSSecureCoding> _value;
	double _minDurationInPreviousState;
	_CDContextualChangeRegistration* _registration;

}
+(BOOL)supportsSecureCoding;
-(void)_start;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_stop;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCDContextualKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3 ;
@end

