/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class NTKComplication;

@interface NTKComplicationTombstone : NTKComplication {

	NTKComplication* _complication;

}

@property (nonatomic,readonly) NTKComplication * complication;              //@synthesize complication=_complication - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tombstoneWithComplication:(id)arg1 ;
-(id)appIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTKComplication *)complication;
-(id)_generateUniqueIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
@end

