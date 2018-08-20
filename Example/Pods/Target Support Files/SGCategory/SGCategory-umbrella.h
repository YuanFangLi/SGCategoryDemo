#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSArray+Category.h"
#import "NSArray+Safe.h"
#import "NSAttributedString+Category.h"
#import "NSData+CommonCryptor.h"
#import "NSDictionary+Category.h"
#import "NSDictionary+Safe.h"
#import "NSMutableArray+Safe.h"
#import "NSMutableDictionary+Safe.h"
#import "NSMutableString+Safe.h"
#import "NSObject+Category.h"
#import "NSObject+PerformBlock.h"
#import "NSObject+Swizzle.h"
#import "NSString+Category.h"
#import "NSString+DisplayTime.h"
#import "NSString+MD5.h"
#import "NSString+Predicate.h"
#import "NSString+Safe.h"
#import "UIButton+Category.h"
#import "UIColor+Category.h"
#import "UIImage+Category.h"
#import "UIMenuItem+Category.h"
#import "UITableView+CellAnimation.h"
#import "UIView+Category.h"
#import "UIView+Frame.h"

FOUNDATION_EXPORT double SGCategoryVersionNumber;
FOUNDATION_EXPORT const unsigned char SGCategoryVersionString[];

