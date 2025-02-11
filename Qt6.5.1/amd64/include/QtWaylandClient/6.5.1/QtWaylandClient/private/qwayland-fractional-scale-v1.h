// This file was generated by qtwaylandscanner
// source file is /data/qsc/qt-everywhere-src-6.5.1/qtwayland/src/client/../3rdparty/protocol/fractional-scale-v1.xml

#ifndef QT_WAYLAND_FRACTIONAL_SCALE_V1
#define QT_WAYLAND_FRACTIONAL_SCALE_V1

#include <QtWaylandClient/private/wayland-fractional-scale-v1-client-protocol.h>
#include <QByteArray>
#include <QString>

struct wl_registry;

QT_BEGIN_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_GCC("-Wmissing-field-initializers")
QT_WARNING_DISABLE_CLANG("-Wmissing-field-initializers")
#if !defined(Q_WAYLAND_CLIENT_FRACTIONAL_SCALE_V1_EXPORT)
#  if defined(QT_SHARED) && !defined(QT_STATIC)
#    if defined(QT_BUILD_WAYLANDCLIENT_LIB)
#      define Q_WAYLAND_CLIENT_FRACTIONAL_SCALE_V1_EXPORT Q_DECL_EXPORT
#    else
#      define Q_WAYLAND_CLIENT_FRACTIONAL_SCALE_V1_EXPORT Q_DECL_IMPORT
#    endif
#  else
#    define Q_WAYLAND_CLIENT_FRACTIONAL_SCALE_V1_EXPORT
#  endif
#endif

namespace QtWayland {
    class Q_WAYLAND_CLIENT_FRACTIONAL_SCALE_V1_EXPORT wp_fractional_scale_manager_v1
    {
    public:
        wp_fractional_scale_manager_v1(struct ::wl_registry *registry, uint32_t id, int version);
        wp_fractional_scale_manager_v1(struct ::wp_fractional_scale_manager_v1 *object);
        wp_fractional_scale_manager_v1();

        virtual ~wp_fractional_scale_manager_v1();

        void init(struct ::wl_registry *registry, uint32_t id, int version);
        void init(struct ::wp_fractional_scale_manager_v1 *object);

        struct ::wp_fractional_scale_manager_v1 *object() { return m_wp_fractional_scale_manager_v1; }
        const struct ::wp_fractional_scale_manager_v1 *object() const { return m_wp_fractional_scale_manager_v1; }
        static wp_fractional_scale_manager_v1 *fromObject(struct ::wp_fractional_scale_manager_v1 *object);

        bool isInitialized() const;

        uint32_t version() const;
        static const struct ::wl_interface *interface();

        enum error {
            error_fractional_scale_exists = 0, // the surface already has a fractional_scale object associated
        };

        void destroy();
        struct ::wp_fractional_scale_v1 *get_fractional_scale(struct ::wl_surface *surface);

    private:
        struct ::wp_fractional_scale_manager_v1 *m_wp_fractional_scale_manager_v1;
    };

    class Q_WAYLAND_CLIENT_FRACTIONAL_SCALE_V1_EXPORT wp_fractional_scale_v1
    {
    public:
        wp_fractional_scale_v1(struct ::wl_registry *registry, uint32_t id, int version);
        wp_fractional_scale_v1(struct ::wp_fractional_scale_v1 *object);
        wp_fractional_scale_v1();

        virtual ~wp_fractional_scale_v1();

        void init(struct ::wl_registry *registry, uint32_t id, int version);
        void init(struct ::wp_fractional_scale_v1 *object);

        struct ::wp_fractional_scale_v1 *object() { return m_wp_fractional_scale_v1; }
        const struct ::wp_fractional_scale_v1 *object() const { return m_wp_fractional_scale_v1; }
        static wp_fractional_scale_v1 *fromObject(struct ::wp_fractional_scale_v1 *object);

        bool isInitialized() const;

        uint32_t version() const;
        static const struct ::wl_interface *interface();

        void destroy();

    protected:
        virtual void wp_fractional_scale_v1_preferred_scale(uint32_t scale);

    private:
        void init_listener();
        static const struct wp_fractional_scale_v1_listener m_wp_fractional_scale_v1_listener;
        static void handle_preferred_scale(
            void *data,
            struct ::wp_fractional_scale_v1 *object,
            uint32_t scale);
        struct ::wp_fractional_scale_v1 *m_wp_fractional_scale_v1;
    };
}

QT_WARNING_POP
QT_END_NAMESPACE

#endif
