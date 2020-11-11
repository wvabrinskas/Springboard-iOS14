/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableString;

@interface CMStyle : NSObject <NSCopying> {

	NSMutableDictionary* properties;
	NSMutableString* mStyleString;

}
-(id)init;
-(unsigned long long)hash;
-(id)propertyForName:(id)arg1 ;
-(id)initWithStyle:(id)arg1 ;
-(id)properties;
-(id)attributeForName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendPropertyForName:(id)arg1 intValue:(int)arg2 ;
-(void)appendPropertyForName:(id)arg1 stringWithColons:(id)arg2 ;
-(void)appendPropertyForName:(id)arg1 stringValue:(id)arg2 ;
-(void)addProperty:(id)arg1 forKey:(id)arg2 ;
-(void)appendPropertyForName:(id)arg1 length:(double)arg2 unit:(int)arg3 ;
-(void)appendSizeInfoFromRect:(CGRect)arg1 ;
-(void)appendPositionInfoFromRect:(CGRect)arg1 ;
-(void)appendDefaultBorderStyle;
-(void)appendPropertyForName:(id)arg1 floatValue:(float)arg2 ;
-(void)appendPropertyString:(id)arg1 ;
-(id)cssStyleString;
-(id)cacheFriendlyCSSStyleString;
-(void)appendPropertyForName:(id)arg1 color:(id)arg2 ;
-(void)addPropertiesToCSSStyleString:(id)arg1 ;
-(void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 unit:(int)arg3 ;
-(void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 ;
-(void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 lineHeight:(float)arg3 unit:(int)arg4 ;
-(void)appendOriginInfoFromPoint:(CGPoint)arg1 ;
@end
