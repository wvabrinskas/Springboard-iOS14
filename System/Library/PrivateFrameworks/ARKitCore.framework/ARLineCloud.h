/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface ARLineCloud : NSObject <NSCopying> {

	NSArray* _lines;

}

@property (nonatomic,readonly) NSArray * lines;              //@synthesize lines=_lines - In the implementation block
-(NSArray *)lines;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLineCloudData:(id)arg1 ;
@end

