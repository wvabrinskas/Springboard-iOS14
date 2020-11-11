/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/WFGlyphDrawableItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VCConfiguredSleepWorkflow : NSObject <WFGlyphDrawableItem, NSSecureCoding, NSCopying> {

	unsigned short _glyphCharacter;
	NSString* _name;
	NSString* _bundleIdentifierForDisplay;
	NSString* _summaryString;
	NSString* _identifier;
	NSString* _actionIdentifier;
	CGImageRef _iconImage;
	double _iconScale;
	long long _backgroundColorValue;

}

@property (nonatomic,readonly) long long backgroundColorValue;                          //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifierForDisplay;              //@synthesize bundleIdentifierForDisplay=_bundleIdentifierForDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString;                           //@synthesize summaryString=_summaryString - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;                        //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) CGImageRef iconImage;                                    //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) double iconScale;                                        //@synthesize iconScale=_iconScale - In the implementation block
@property (nonatomic,readonly) unsigned short glyphCharacter;                           //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(CGSize)glyphSize;
-(CGImageRef)iconImage;
-(NSString *)actionIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(double)iconScale;
-(long long)backgroundColorValue;
-(void)setIconImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(unsigned short)glyphCharacter;
-(NSString *)name;
-(NSString *)description;
-(NSString *)summaryString;
-(NSString *)bundleIdentifierForDisplay;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithWorkflowIdentifier:(id)arg1 bundleIdentifierForDisplay:(id)arg2 summaryString:(id)arg3 name:(id)arg4 actionIdentifier:(id)arg5 glyphCharacter:(unsigned short)arg6 backgroundColorValue:(long long)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
