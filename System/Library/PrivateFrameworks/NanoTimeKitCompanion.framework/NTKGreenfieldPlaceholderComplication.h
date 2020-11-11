/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class NTKComplication, NSNumber, NSString;

@interface NTKGreenfieldPlaceholderComplication : NTKComplication {

	NTKComplication* _complication;
	NSNumber* _appStoreItemId;
	NSString* _appName;

}

@property (nonatomic,readonly) NTKComplication * complication;              //@synthesize complication=_complication - In the implementation block
@property (nonatomic,readonly) NSNumber * appStoreItemId;                   //@synthesize appStoreItemId=_appStoreItemId - In the implementation block
@property (nonatomic,readonly) NSString * appName;                          //@synthesize appName=_appName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placeholderWithComplication:(id)arg1 appStoreItemId:(id)arg2 appName:(id)arg3 ;
+(id)placeholderWithComplication:(id)arg1 ;
-(NSString *)appName;
-(id)appIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTKComplication *)complication;
-(NSNumber *)appStoreItemId;
-(id)_generateUniqueIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)localizedDetailText;
-(id)localizedRichDetailText;
-(BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)localizedRichKeylineLabelText;
@end
