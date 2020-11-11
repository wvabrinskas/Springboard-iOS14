/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/CVMLObservation_LegacySupportDoNotChange.h>

@class NSUUID, MPImageDescriptor_LegacySupportDoNotChange, NSString;

@interface CVMLImageprintObservation_LegacySupportDoNotChange : CVMLObservation_LegacySupportDoNotChange {

	NSUUID* _identifier;
	MPImageDescriptor_LegacySupportDoNotChange* _imageprintDescriptor;
	NSString* _imageprintType;
	NSString* _imageprintVersion;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)serializeAsVNImageprintStateAndReturnError:(id*)arg1 ;
-(unsigned long long)serializedLength;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
@end
