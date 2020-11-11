/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NTKComplicationSectionInfo.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTKTopLevelSectionInfo : NSObject <NTKComplicationSectionInfo, NSCopying> {

	NSString* _ntk_identifier;
	NSString* _ntk_localizedSectionName;

}

@property (nonatomic,copy) NSString * ntk_identifier;                        //@synthesize ntk_identifier=_ntk_identifier - In the implementation block
@property (nonatomic,copy) NSString * ntk_localizedSectionName;              //@synthesize ntk_localizedSectionName=_ntk_localizedSectionName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ntk_identifier;
-(NSString *)ntk_localizedSectionName;
-(id)initWithIdentifier:(id)arg1 localizedSectionName:(id)arg2 ;
-(void)setNtk_identifier:(NSString *)arg1 ;
-(void)setNtk_localizedSectionName:(NSString *)arg1 ;
@end
