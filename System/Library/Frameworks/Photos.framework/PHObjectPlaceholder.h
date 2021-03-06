/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHObject.h>

@class NSString;

@interface PHObjectPlaceholder : PHObject {

	NSString* _localIdentifier;
	long long _assetMediaType;

}

@property (assign) long long assetMediaType;              //@synthesize assetMediaType=_assetMediaType - In the implementation block
-(id)localIdentifier;
-(unsigned long long)hash;
-(id)initWithLocalIdentifier:(id)arg1 ;
-(long long)assetMediaType;
-(void)setAssetMediaType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

